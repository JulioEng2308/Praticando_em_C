package main
import "fmt"

func imprimeDiferencaMaiorMenor () {
    var vet[9] int
    var matriz [][]int
    var maior int
    var menor int
    var indice int
    var cont int
    var diferenca int

    for indice = 0; indice < 9; indice++ {
      fmt.Scan(&vet[indice])
    }

    matriz = make([][]int, 3)

    for indice = 0; indice < 3; indice++ {
        matriz[indice] = make([]int, 3)
        for cont = 0; cont < 3; cont++ {
            matriz[indice][cont] = vet[indice * 3 + cont]
        }
    }

    maior = matriz[0][0]
    menor = matriz[0][0]

    for indice = 0; indice < 3; indice++ {
        for cont = 0; cont < 3; cont++ {
            if matriz[indice][cont] > maior {
                maior = matriz[indice][cont]
            }
            if matriz[indice][cont] < menor {
                menor = matriz[indice][cont]
            }
        }
    }

    diferenca = maior - menor

    fmt.Println(diferenca)
}

func main () {
  imprimeDiferencaMaiorMenor()
}