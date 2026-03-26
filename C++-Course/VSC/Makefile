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
	@cp templates/main.cpp.template section$(S)/$(PN)/src/main.cpp
	@echo "Ordnerstruktur für section$(S)/$(PN) erstellt"


nPT:
	@cp -R templates/project_templates/$(TN) ./section$(S)/$(PN)

rmProject:
	@rm -rf section$(S)/$(PN)
	@echo "Ordnerstruktur für section$(S)/$(PN) gelöscht"

newStandard:
	@if [ -z "$(TN)" ]; then echo "Fehler: PN ist leer!"; exit 1; fi
	cp templates/project_templates/$(TN)/src/main.cpp templates/main.cpp.template