package main
import "fmt"

func main(){
  var t,a,b int
  fmt.Scanln(&t)
  for i:=0 ; i<t ; i++ {
    fmt.Scan(&a,&b)
    if a == b {
      fmt.Println(7-a)
    } else if a>b {
      fmt.Println(7-a)
    } else {
      fmt.Println(7-b)
    }
  }
  fmt.Print("")
}
