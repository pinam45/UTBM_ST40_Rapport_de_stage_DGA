@echo off
set DOCUMENT_NAME=RAPPORT_A17_INFO_ST40_PINARD_MAXIME
echo.
for %%X in  (.acn .acr .alg .aux .bbl .blg .fdb_latexmk .fls .glg .glo .gls .ist .lof .log .out .toc .synctex.gz .pdf .xdv) do (
	if exist %DOCUMENT_NAME%%%X (
		echo Removing file %DOCUMENT_NAME%%%X
		del %DOCUMENT_NAME%%%X >NUL 2>&1
	)
)
echo.
