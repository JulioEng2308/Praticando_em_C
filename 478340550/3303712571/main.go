// professor estou saindo de casa e ir pra UFAM agr, vou usar os computadores de lá
// ja retornei prof
// tava colocando musica no youtube prof
package main
import "fmt"

func main () {
  var matu [1][10]int
  var matv [1][10]int
  //var prodmat int
  //var linha int
  var coluna int 
  var somamat int
  
  for coluna = 0; coluna < 10; coluna++ {
      fmt.Scan(&matu[0][coluna])
        
      }
      
  for coluna = 0; coluna < 10; coluna++ {
      fmt.Scan(&matv[0][coluna])
  }
  somamat = 0
  
  for coluna = 0; coluna < 10; coluna++ {
          somamat = somamat + (matu[0][coluna] * matv[0][coluna])
         
      }
      fmt.Println(somamat)
  }