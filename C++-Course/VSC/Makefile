nSection: updateCMake
	@if [ -z "$(S)" ]; then echo "Fehler: S ist leer!"; exit 1; fi
	@mkdir -p section$(S)
	@cp templates/InSectionCMake.template section$(S)/CMakeLists.txt

nP:
	@if [ -z "$(PN)" ]; then echo "Fehler: PN ist leer!"; exit 1; fi
	@if [ -z "$(S)" ]; then echo "Fehler: S ist leer!"; exit 1; fi
	@mkdir -p section$(S)/$(PN)
	@cp templates/Makefile.template section$(S)/$(PN)/Makefile
	@cd section$(S)/$(PN) && \
	mkdir -p src && \
	mkdir -p include && \
	mkdir -p build
	@cp templates/main.cpp.template section$(S)/$(PN)/src/main.cpp
	@cp templates/InSourceCMake.template section$(S)/$(PN)/src/CMakeLists.txt
	@cp templates/InProjectCMake.template section$(S)/$(PN)/CMakeLists.txt
	@cp templates/header.h.template section$(S)/$(PN)/include/header.h
	@cp templates/header.cpp.template section$(S)/$(PN)/include/header.cpp
	@echo "Adding a new subdirectory to section$(S) level CMakeLists file."
	@echo "add_subdirectory($(PN))" >> section$(S)/CMakeLists.txt
	@cp templates/InIncludeCMake.template section$(S)/$(PN)/include/CMakeLists.txt
	@echo "Ordnerstruktur für section$(S)/$(PN) erstellt"


nPT:
	@cp -R templates/project_templates/$(TN) ./section$(S)/$(PN)
	@echo "Adding a new subdirectory to section$(S) level CMakeLists file."
	@echo "add_subdirectory($(PN))" >> section$(S)/CMakeLists.txt
nPC:
	@if [ -z "$(S)" ]; then echo "Fehler: S ist leer!"; exit 1; fi
	@if [ -z "$(PN)" ]; then echo "Fehler: PN ist leer!"; exit 1; fi
	@if [ -z "$(CPN)" ]; then echo "Fehler: CPN ist leer!"; exit 1; fi
	@if [ -z "$(CS)" ]; then echo "Fehler: CS ist leer!"; exit 1; fi
	@echo "Building a Project from older project:"
	@echo "copying section$(CS)/$(CPN) to section$(S)/$(PN)"
	@cp -R section$(CS)/$(CPN) ./section$(S)/$(PN)
	@echo "Adding a new subdirectory to section$(S) level CMakeLists file."
	@echo "add_subdirectory($(PN))" >> section$(S)/CMakeLists.txt
	
rmProject:
	@if [ -z "$(S)" ]; then echo "Fehler: S ist leer!"; exit 1; fi
	@if [ -z "$(PN)" ]; then echo "Fehler: PN ist leer!"; exit 1; fi
	@rm -rf section$(S)/$(PN)
	@sed -i '/add_subdirectory($(PN))/d' section$(S)/CMakeLists.txt
	@echo "Subdirectory in section$(S) level CMakeLists.txt entfernt"
	@echo "Ordnerstruktur für section$(S)/$(PN) gelöscht"

rmSection:
	@if [ -z "$(S)" ]; then echo "Fehler: S ist leer!"; exit 1; fi
	@rm -rf section$(S)
	@sed -i '/add_subdirectory(section$(S))/d' CMakeLists.txt
	@sed -i '/section$(S)/d' CMakeLists.txt
	@echo "Subdirectory aus top level CMakeLists.txt file entfernt"

newStandard:
	@if [ -z "$(TN)" ]; then echo "Fehler: TN ist leer!"; exit 1; fi
	cp templates/project_templates/$(TN)/src/main.cpp templates/main.cpp.template


updateCMake:
	@echo "Adding a new subdirectory in top level CMakeLists file."
	@sed -i "/# SUBDIRECTORIES/a add_subdirectory(section$(S))" CMakeLists.txt
	@sed -i "/# SECTION-INSTALL-TARGETS /a \ \tsection$(S)" CMakeLists.txt

clean:
	rm -rf build
	rm -rf ../../build
	rm -rf docs
	mkdir docs

clean-all:
	find ../.. -type d -name "build" -exec rm -rf {} +
	@echo "Alle build-Ordner wurden gelöscht."

dependency:
	cd build && cmake .. --graphviz=graph.dot && dot -Tpng graph.dot -o graphImage.png

pack-all:
	cd ../../build && \
	cmake -DCPACK_MODE=full ../C++-Course/VSC/ && \
	cpack

pack-challenges:
	cd ../../build && \
	cmake -DCPACK_MODE=challenges ../C++-Course/VSC/ && \
	cpack

pack-custom:
	@if [ -z "$(PN)" ]; then echo "Fehler: PN ist leer!"; exit 1; fi
	@if [ -z "$(S)" ]; then echo "Fehler: S ist leer!"; exit 1; fi
	cd ../../build && \
	cmake -DCPACK_MODE=custom -DCPACK_CUSTOM_COMPONENTS="section${S}_${PN}" ../C++-Course/VSC/ && \
	cpack

reload:
	rm ../../.vscode/launch.json
	cp templates/launch.json.template ../../.vscode/launch.json