; $Id: ps2gif.scm,v 1.1 2001-07-20 16:52:56 geuzaine Exp $
;
; This is a GIMP script to load a postscript file, rotate it, and save
; each page as a GIF file.
;
; To use it, copy 'ps2gif.scm' to ~/.gimp-1.2/scripts/. The script
; will be available in the 'Xtns/Geuzaine/ps2gif' menu.
;
; Christophe
;

(define (script-fu-ps2gif in rotate dpi first last out)

  (set! index first)
  
  (while (<= index last)
	 (file-ps-load-setargs dpi 0 0 1 (number->string index) 6 4 1)
	 (set! img (car (file-ps-load 1 in in)))
	 (set! drw (car (gimp-image-active-drawable img)))
	 (if (= rotate TRUE) (plug-in-rotate 1 img drw 3 1)) ; rotate 270 degrees
	 (gimp-convert-indexed img 0 0 256 0 1 "")
	 (if (< index 10)
	     (set! name (string-append out "0" (number->string index) ".gif"))
	     (set! name (string-append out (number->string index) ".gif")))
	 (file-gif-save 1 img drw name name 0 0 0 0)
	 (gimp-image-delete img)
	 (set! index (+ index 1))
	 )
  
  )

(script-fu-register "script-fu-ps2gif"
		    "<Toolbox>/Xtns/Geuzaine/ps2gif"
		    "Convert a multi-page postscript file to gif files"
		    "Christophe Geuzaine"
		    "Christophe Geuzaine"
		    "2001"
		    ""
		    SF-FILENAME "Input file" "slides-web.ps"
		    SF-TOGGLE "Landscape" TRUE
		    SF-VALUE "Resolution (dpi)" "65"
		    SF-VALUE "First page" "1"
		    SF-VALUE "Last page" "39"
                    SF-STRING  "Output name" "gif/getdp-")
