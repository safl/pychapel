INSTALL_DIR=/home/safl/pych_installed
MODULE_DIR=module
DOC_DIR=docs

all:

run: clean deploy c chapel

pych: clean deploy
	pych --check

deploy:
	cd $(MODULE_DIR) && python setup.py install --prefix $(INSTALL_DIR)

upload:
	#cd $(MODULE_DIR) && python setup.py register
	cd $(MODULE_DIR) && python setup.py bdist sdist upload

chapel:
	python $(INSTALL_DIR)/share/pych/examples/chapel.inline.multi.py

c:
	python $(INSTALL_DIR)/share/pych/examples/c.inline.py

doc:
	cd $(DOC_DIR) && make html
	xdg-open $(DOC_DIR)/build/html/index.html

clean:
	@rm -rf $(MODULE_DIR)/build
	@rm -rf $(MODULE_DIR)/dist
	@rm -f $(INSTALL_DIR)/var/pych/store/c/*.so
	@rm -f $(INSTALL_DIR)/var/pych/store/chapel/*.so
	@rm -f /tmp/tmp*.a
	@rm -f /tmp/temp-*.chpl
	@rm -f /tmp/temp-*.c

