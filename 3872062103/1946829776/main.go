package main 
import "fmt"

func ehPrimo (num int) bool {
    var indice int
    var primo bool

      if num <=1 {
        primo = false
      } else {
          primo = true
          for indice = 2; indice < num; indice++ {
              if num % indice == 0 {
                  primo = false
              }
          }
      }

    return primo
}

func imprimePrimeiroPrimo () {
    var numero []int
    var indice int
    var indefinido int 
    var primeiroPrimo int

    numero = make([]int, 7)
    primeiroPrimo = -1

    for indice = 0; indice < 7; indice++ {
        fmt.Scan(&numero[indice])
    }

    indice = 0

    for indice < 7 {
        indefinido = numero[indice]
        if ehPrimo(indefinido) && primeiroPrimo == -1 {
            primeiroPrimo = indefinido
        }
      indice++
    }
    fmt.Println(primeiroPrimo) 
}

func main (){
    imprimePrimeiroPrimo()
}