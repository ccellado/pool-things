"" TAB BEHAVIOR
" Ctrl+t to open new tab
" " Note: this overwrites a shortcut for the tag stack, if you use tags
nnoremap <C-t> :tabnew
"
" Chrome-like shortcuts for prevtab and nexttab
" (Meaning ⌘+⌥+[arrows])
nnoremap <ESC>[1;9D gT
nnoremap <ESC>[1;9C gt
set number	
set linebreak	
set showbreak=+++
set textwidth=100
set showmatch
set virtualedit=all
set visualbell
set incsearch
syntax on
set autoindent
set cindent
set softtabstop=0
set ruler
if empty(glob("~/.vim/autoload/plug.vim"))
    execute '!curl -fLo ~/.vim/autoload/plug.vim --create-dirs https://raw.github.com/junegunn/vim-plug/master/plug.vim'
endif 
set background=dark

call plug#begin('~/.vim/plugged')
Plug 'nlknguyen/c-syntax.vim' " dddd
Plug 'altercation/vim-colors-solarized' "ddd
call plug#end()

"let g:solarized_termcolors=256 "For Solarized to work
colorscheme solarized

