package main 
import "fmt"

func main () {
  var nome1 string

  fmt.Scan(&nome1)

  if nome1 == "admin" {
    fmt.Println("$$$ Acesso Liberado, chave: {admin} $$$")
    fmt.Println("Fim do programa")
  } else {
    fmt.Println("Fim do programa")
  }
}