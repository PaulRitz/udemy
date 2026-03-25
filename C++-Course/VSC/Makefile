nSection:
	@mkdir -p section$(S)

nP:
	@if [ -z "$(PN)" ]; then echo "Fehler: PN ist leer!"; exit 1; fi
	@mkdir -p section$(S)/$(PN)
	@cp templates/Makefile.template section$(S)/$(PN)/Makefile
	@cd section$(S)/$(PN) && \
	mkdir -p src && \
	mkdir -p include && \
	mkdir -p build
	@cp templates/main.cpp section$(S)/$(PN)/src/main.cpp
	@echo "Ordnerstruktur für $(PN) erstellt"

nPT:
	@cp -R templates/project_templates/$(TN) ./section$(S)/$(PN)

rmProject:
	@rm -rf section$(S)/$(PN)
	@echo "Ordnerstruktur für section$(S)/$(PN) gelöscht"