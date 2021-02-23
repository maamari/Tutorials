"set nocompatible              " be iMproved, required
"filetype off                  " required
"set rtp+=~/.vim/bundle/Vundle.vim
"set rtp+=~/.vim/bundle/CompleteParameter.vim
"call vundle#begin()
"Plugin 'VundleVim/Vundle.vim'
"Plugin 'https://github.com/ycm-core/YouCompleteMe.git'
"call vundle#end()            " required

"filetype plugin indent on    " required

"call plug#begin('~/.vim/plugged')
"Plug '/home/maamari/Documents/Other/Tools/AutoComplPop'
"call plug#end()

"inoremap <expr> <Down> pumvisible() ? "<C-n>" :"<Down>"
"inoremap <expr> <Up> pumvisible() ? "<C-p>" : "<Up>"
"inoremap <expr> <Right> pumvisible() ? "<C-y>" : "<Right>"
"inoremap <expr> <CR> pumvisible() ? "<C-y>" :"<CR>"
"inoremap <expr> <Left> pumvisible() ? "<C-e>" : "<Left>"
"
set tabstop=4       " The width of a TAB is set to 4.
                    " Still it is a \t. It is just that
                    " Vim will interpret it to be having
                    " a width of 4.

set shiftwidth=4    " Indents will have a width of 4

set softtabstop=4   " Sets the number of columns for a TAB

set expandtab       " Expand TABs to spaces

let g:clang_library_path='/usr/lib/llvm-10/lib/libclang.so.1' " Sets clang path
filetype plugin on 
set omnifunc=syntaxcomplete#Complete " Autoset omni completion on for func completion

