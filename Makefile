INSTALL_DIR=/tmp/pychdev
MODULE_DIR=module

all:

run: clean deploy c chapel

deploy:
	cd $(MODULE_DIR) && python setup.py install --prefix $(INSTALL_DIR)

upload:
	#cd $(MODULE_DIR) && python setup.py register
	cd $(MODULE_DIR) && python setup.py bdist sdist upload

chapel:
	python $(INSTALL_DIR)/share/pych/examples/chapel.inline.multi.py

c:
	python $(INSTALL_DIR)/share/pych/examples/c.inline.py

clean:
	@rm -f $(INSTALL_DIR)/var/pych/store/c/*.so
	@rm -f $(INSTALL_DIR)/var/pych/store/chapel/*.so
	@rm -rf $(MODULE_DIR)/build
	@rm -rf $(MODULE_DIR)/dist
	@rm -f /tmp/tmp*.a
	@rm -f /tmp/temp-*.chpl
	@rm -f /tmp/temp-*.c

