// foi mal0 professor, tava aparecendo notifcação de anuncio e cliquei nele ao inves do X, perdão

package main 
import "fmt"

func main () {
    var numero int
    var digito1 int  
    var digito2 int
    var digito3 int
    var digito4 int

  fmt.Scan(&numero)

  digito1 = numero/1000
  digito2 = (numero/100) - (digito1 * 10)
  digito3 = (numero/10) - ((digito1 * 100) + (digito2 *10))
  digito4 = (numero) - ((digito1 * 1000) + (digito2 * 100) + (digito3 * 10))

  if (digito1 + digito3) % (digito2 + digito4) == 0 {
      fmt.Println("liberado")
  } else {
      fmt.Println("negado")
  }
}