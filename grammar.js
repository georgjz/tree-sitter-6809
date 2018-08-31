module.exports = grammar({
    name: 'asm6809',

    rules: {
        source_file: $ => repeat(/\w/)
    }
    
})
