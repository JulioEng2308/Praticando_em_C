// professor talvez o senhor receba notificação pois terei um compromisso agora, voltarei a fazer o cdg
//mais tarde, terminarei antes das 22h ok ksksksksk
//dsclp é a irmã dele, ele me disse que tava em prova mas esqueci, perdão prof
//professor retornei agora ok

package  main 
import "fmt"

func ehPrimo (num int) bool {
  var indice int
  var primo bool

  if num <= 1 {
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

func main () {
    var vet[10] int
    var soma int 
    var indice int
    var valor int
    soma = 0

    for indice = 0; indice < 10; indice++ {
        fmt.Scan(&vet[indice])
        valor = vet[indice]

        if ehPrimo(valor) {
            soma += valor
        }
    }

  fmt.Print(soma)
}