//Escreva um programa que inverta os caracteres de um string.


function reverterPalavra(palavra) {
    var novaPalavra = "";

    for (var i = palavra.length - 1; i >= 0; i--) {
        novaPalavra += palavra[i];
    }

    return novaPalavra;
}

reverterPalavra('inteligente');
