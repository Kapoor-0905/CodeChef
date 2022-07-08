package main
import "fmt"

func main(){
  var t,a,b,c int
  fmt.Scanln(&t)
  for i:=0;i<t;i++{
    fmt.Scan(&a,&b,&c)
    if a>b && a>c{
      fmt.Println("ALICE")
    } else if b>a && b>c{
      fmt.Println("BOB")
    } else {
      fmt.Println("CHARLIE")
    }
  }
}
