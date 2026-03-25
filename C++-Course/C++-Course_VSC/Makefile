nProject:
	@mkdir -p $(PN)
	@cp templates/Makefile.template $(PN)/Makefile
	@cd $(PN) && \
	mkdir -p src && \
	mkdir -p include && \
	mkdir -p build
	@echo "Ordnerstruktur für $(PN) erstellt"
rmProject:
	@rm -rf $(PN)
	@echo "Ordnerstruktur für $(PN) gelöscht"