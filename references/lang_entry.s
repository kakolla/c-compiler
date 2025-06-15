	.section	__TEXT,__text,regular,pure_instructions
	.build_version macos, 15, 0	sdk_version 15, 4
	.globl	_lang_entry                     ; -- Begin function lang_entry
	.p2align	2
_lang_entry:                            ; @lang_entry
	.cfi_startproc
; %bb.0:
	mov	w0, #99                         ; =0x63
	ret
	.cfi_endproc
                                        ; -- End function
.subsections_via_symbols
