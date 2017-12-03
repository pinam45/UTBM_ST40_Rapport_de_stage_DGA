#=============================================================================
# Project related variables
DOCUMENT_NAME           = RAPPORT_A17_INFO_ST40_PINARD_MAXIME

#=============================================================================
# Commands variables
LATEX_COMPILER_CMD      = xelatex
MAKEGLOSSARIES_CMD      = makeglossaries
BIBTEX_CMD              = bibtex
DISPLAY                 = printf
RM                      = rm -f

#=============================================================================
# Other
TO_DELETE_EXT           = .acn .acr .alg .aux .bbl .blg .glg .glo .gls .ist .lof .log .out .toc .synctex.gz .pdf
LATEX_COMPILER_SILENT   = -interaction=batchmode 1>/dev/null 2>/dev/null
MAKEGLOSSARIES_SILENT   = -q
BIBTEX_SILENT           = 1>/dev/null 2>/dev/null

#=============================================================================
# Automatic variables
TO_DELETE               = $(foreach ext,$(TO_DELETE_EXT),$(DOCUMENT_NAME)$(ext))

#=============================================================================
# Rules
.PHONY: silent
silent:
	@make --silent all SILENT=true

.PHONY: all
all: pdf
	@$(DISPLAY) "\n\n"

.PHONY: pdf
pdf:
	@$(DISPLAY) $(if $(SILENT), "\n\033[0m\033[1;34m[··]\033[0m Executing \033[0;33m$(LATEX_COMPILER_CMD)\033[0m...   ", "\n\033[0m\033[1;34m->\033[0m Executing \033[0;33m$(LATEX_COMPILER_CMD)\033[0m...\n")
	$(LATEX_COMPILER_CMD) $(DOCUMENT_NAME) $(if $(SILENT), $(LATEX_COMPILER_SILENT))
	@$(DISPLAY) $(if $(SILENT), "\r\033[1C\033[1;32mOK\033[0m","")

	@$(DISPLAY) $(if $(SILENT), "\n\033[0m\033[1;34m[··]\033[0m Executing \033[0;33m$(BIBTEX_CMD)\033[0m...   ", "\n\033[0m\033[1;34m->\033[0m Executing \033[0;33m$(BIBTEX_CMD)\033[0m...\n")
	$(BIBTEX_CMD) $(DOCUMENT_NAME) $(if $(SILENT), $(BIBTEX_SILENT))
	@$(DISPLAY) $(if $(SILENT), "\r\033[1C\033[1;32mOK\033[0m","")

	@$(DISPLAY) $(if $(SILENT), "\n\033[0m\033[1;34m[··]\033[0m Executing \033[0;33m$(MAKEGLOSSARIES_CMD)\033[0m...   ", "\n\033[0m\033[1;34m->\033[0m Executing \033[0;33m$(MAKEGLOSSARIES_CMD)\033[0m...\n")
	$(MAKEGLOSSARIES_CMD) $(if $(SILENT), $(MAKEGLOSSARIES_SILENT)) $(DOCUMENT_NAME)
	@$(DISPLAY) $(if $(SILENT), "\r\033[1C\033[1;32mOK\033[0m","")

	@$(DISPLAY) $(if $(SILENT), "\n\033[0m\033[1;34m[··]\033[0m Executing \033[0;33m$(LATEX_COMPILER_CMD)\033[0m...   ", "\n\033[0m\033[1;34m->\033[0m Executing \033[0;33m$(LATEX_COMPILER_CMD)\033[0m...\n")
	$(LATEX_COMPILER_CMD) $(DOCUMENT_NAME) $(if $(SILENT), $(LATEX_COMPILER_SILENT))
	@$(DISPLAY) $(if $(SILENT), "\r\033[1C\033[1;32mOK\033[0m","")

	@$(DISPLAY) $(if $(SILENT), "\n\033[0m\033[1;34m[··]\033[0m Executing \033[0;33m$(LATEX_COMPILER_CMD)\033[0m...   ", "\n\033[0m\033[1;34m->\033[0m Executing \033[0;33m$(LATEX_COMPILER_CMD)\033[0m...\n")
	$(LATEX_COMPILER_CMD) $(DOCUMENT_NAME) $(if $(SILENT), $(LATEX_COMPILER_SILENT))
	@$(DISPLAY) $(if $(SILENT), "\r\033[1C\033[1;32mOK\033[0m","")

.PHONY: clean
clean:
	@$(DISPLAY) "\n\033[1;32m->\033[0m Cleaning files...\n"
	@$(DISPLAY) " $(foreach file,$(TO_DELETE),$(if $(wildcard $(file)),\033[1;32m-\033[0m Removing file \033[0;33m$(file)\033[0m\n,\b))"
	@$(RM) $(TO_DELETE)
	@$(DISPLAY) "\n"
