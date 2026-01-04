vim.g.base46_cache = vim.fn.stdpath "data" .. "/base46/"
vim.g.mapleader = " "

-- bootstrap lazy and all plugins
local lazypath = vim.fn.stdpath "data" .. "/lazy/lazy.nvim"

if not vim.uv.fs_stat(lazypath) then
  local repo = "https://github.com/folke/lazy.nvim.git"
  vim.fn.system { "git", "clone", "--filter=blob:none", repo, "--branch=stable", lazypath }
end

vim.opt.rtp:prepend(lazypath)

local lazy_config = require "configs.lazy"

-- load plugins
require("lazy").setup({
  {
    "pysan3/fcitx5.nvim",
    "NvChad/NvChad",
    lazy = false,
    branch = "v2.5",
    import = "nvchad.plugins",
  },

  { import = "plugins" },
}, lazy_config)

-- load theme
dofile(vim.g.base46_cache .. "defaults")
dofile(vim.g.base46_cache .. "statusline")

require "options"
require "autocmds"

vim.schedule(function()
  require "mappings"
end)
--
vim.lsp.enable('clangd')
-- S
vim.cmd [[
  highlight Normal guibg=none
  highlight NonText guibg=none
  highlight Normal ctermbg=none
  highlight NonText ctermbg=none
]]
-- shortcuts
vim.api.nvim_set_keymap('n', 'mm', ':make', {noremap = true})
vim.api.nvim_set_keymap('n', 'mr', ':w | make | hori term ./results', {noremap = true})
vim.api.nvim_set_keymap('n', 'ww', ':w', {noremap = true})
vim.api.nvim_set_keymap('n', 'wq', ':wq', {noremap = true})
vim.api.nvim_set_keymap('n', 'ee', ':e', {noremap = true})
vim.api.nvim_set_keymap('n', 'ss', ':/s', {noremap = true})
vim.api.nvim_set_keymap('i', 'nn', '<Del>', {noremap = true})
vim.api.nvim_set_keymap('i', 'nb', '<Del>', {noremap = true})
vim.api.nvim_set_keymap('i', 'gh', '<Esc>', {noremap = true})
vim.api.nvim_set_keymap('i', 'hh', '<Esc>', {noremap = true})
vim.api.nvim_set_keymap('i', 'jk', '<Esc>', {noremap = true})
vim.api.nvim_set_keymap('i', 'ii', '<Ins>', {noremap = true})

vim.api.nvim_set_keymap('i', '(', '()', {noremap = true})
vim.api.nvim_set_keymap('i', '{', '{}', {noremap = true})

vim.api.nvim_set_keymap('i', 'bb', '<Backspace>', {noremap = true})
vim.api.nvim_set_keymap('n', 'tt', ':hori term ./results', {noremap = true})
