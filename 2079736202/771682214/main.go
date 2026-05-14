//desculpa professor, anuncio de antivirus da macfree

package main 
import "fmt"

func main () {
  var matriz [3][3] int 
  var linha int
  var coluna int
  var somadiagprin int
  var somadiagsecun int
  var resultado int

  for linha = 0; linha < 3; linha++ {
      for coluna = 0; coluna < 3; coluna++ {
          fmt.Scan(&matriz[linha][coluna])
      }
  }

  somadiagprin = 0
  for linha = 0; linha < 3; linha++ {
      somadiagprin = somadiagprin + matriz[linha][linha]
  }

  somadiagsecun = 0
  for linha = 0; linha < 3; linha++ {
      somadiagsecun = somadiagsecun + matriz[linha][2 - linha]
  }

  for linha = 0; linha < 3; linha++ {
    for coluna = 0; coluna < 3; coluna++ {
        resultado = somadiagprin - somadiagsecun
    }
  }

  fmt.Println(resultado)
}