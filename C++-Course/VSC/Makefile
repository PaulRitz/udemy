nSection: updateCMake
	@mkdir -p section$(S)
	@cp templates/InSectionCMake.template section$(S)/CMakeLists.txt

nP:
	@if [ -z "$(PN)" ]; then echo "Fehler: PN ist leer!"; exit 1; fi
	@mkdir -p section$(S)/$(PN)
	@cp templates/Makefile.template section$(S)/$(PN)/Makefile
	@cd section$(S)/$(PN) && \
	mkdir -p src && \
	mkdir -p include && \
	mkdir -p build
	@cp templates/main.cpp.template section$(S)/$(PN)/src/main.cpp
	@cp templates/InSourceCMake.template section$(S)/$(PN)/src/CMakeLists.txt
	@cp templates/InProjectCMake.template section$(S)/$(PN)/CMakeLists.txt
	@echo "Adding a new subdirectory to section$(S) level CMakeLists file."
	@echo "add_subdirectory($(PN))" >> section$(S)/CMakeLists.txt
	@touch section$(S)/$(PN)/include/CMakeLists.txt
	@echo "Ordnerstruktur für section$(S)/$(PN) erstellt"


nPT:
	@cp -R templates/project_templates/$(TN) ./section$(S)/$(PN)
	@echo "Adding a new subdirectory to section$(S) level CMakeLists file."
	@echo "add_subdirectory($(PN))" >> section$(S)/CMakeLists.txt

rmProject:
	@rm -rf section$(S)/$(PN)
	@echo "Ordnerstruktur für section$(S)/$(PN) gelöscht"

newStandard:
	@if [ -z "$(TN)" ]; then echo "Fehler: PN ist leer!"; exit 1; fi
	cp templates/project_templates/$(TN)/src/main.cpp templates/main.cpp.template

updateCMake:
	@echo "Adding a new subdirectory in top level CMakeLists file."
	@echo "add_subdirectory(section$(S))" >> CMakeLists.txt

clean:
	rm -rf build
	rm -rf ../../build