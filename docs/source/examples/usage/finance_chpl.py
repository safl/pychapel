#!/usr/bin/env python
import argparse
import time

import matplotlib
import matplotlib
import matplotlib.pyplot as plt
import matplotlib.ticker as mticker
import matplotlib.dates as mdates
import numpy as np

from pych.extern import Chapel

elapsed = [time.time()]

def measure(text=""):
    """Measure execution time."""

    global elapsed
    elapsed.append(time.time())
    if text:
        text += " "
        print("%s%f" % (text, elapsed[-1] - elapsed[-2]))

def visualize(date, bid, ask, voodoo, spread=30):
    """Plot bid price, asking price and "voodoo" values."""

    # Downsample
    dateDs, bidDs, askDs, voodooDs = (
        date[::spread], bid[::spread], ask[::spread], voodoo[::spread]
    )

    fig = plt.figure(figsize=(10,7))
    ax1 = plt.subplot2grid((40,40), (0,0), rowspan=40, colspan=40)

    ax1.plot(date, bid)
    ax1.plot(date, ask)
    plt.gca().get_yaxis().get_major_formatter().set_useOffset(False)

    ax1_2 = ax1.twinx()
    ax1_2.fill_between(date, 0, voodoo, facecolor='g', alpha=.3)

    plt.subplots_adjust(bottom=.23) 
    plt.grid(True)
    plt.show()
    plt.close()

def load_prices(filename="GBPUSD1m.txt"):
    """Load stock-prices."""

    date, bid, ask = np.loadtxt(
        'GBPUSD1m.txt',
        unpack=True,
        delimiter=',',
    )
    voodoo = np.empty(date.shape)

    return date, bid, ask, voodoo

@Chapel()
def quant(date=np.ndarray, bid=np.ndarray, ask=np.ndarray, voodoo=np.ndarray):
    """
    var future = 200;
    voodoo = ask-bid;
    for i in 1..future {
        voodoo += (ask-bid + ask-bid  + ask-bid + ask-bid
                   +ask-bid + ask-bid + ask-bid + ask-bid
                  ) / 8;
    }
    voodoo = voodoo / future;
    """
    return None

def main(filename):
    date, bid, ask, voodoo = load_prices(filename)      # Load dataset
    measure()
    quant(date, bid, ask, voodoo)                       # Compute something
    measure("Computation took")
    
    visualize(date, bid, ask, voodoo)                   # Visualize the results

if __name__ == "__main__":
    parser = argparse.ArgumentParser(
        description='Example illustrating a synthetic finance code.'
    )
    parser.add_argument(
        '--filename', help="Path to filename",
        type=str,
    )
    args = parser.parse_args()

    main(args.filename)
