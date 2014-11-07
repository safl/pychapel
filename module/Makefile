all:

run: clean deploy c chapel

deploy:
	python setup.py install --prefix /tmp/pych_dev

c:
	python /tmp/pych_dev/share/pych/examples/c.inline.py

chapel:
	python /tmp/pych_dev/share/pych/examples/chapel.inline.begin.py

clean:
	@rm -f store/c/*.so
	@rm -f store/chapel/*.so
	@rm -f /tmp/tmp*.a
	@rm -f /tmp/temp-*.chpl
	@rm -rf build
	@rm -rf /tmp/pych_dev
