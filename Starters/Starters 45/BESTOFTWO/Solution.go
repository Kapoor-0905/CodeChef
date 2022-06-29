package main
import "fmt"

func main(){
  var t,a,b int
  fmt.Scanln(t)
  for i:=0;i<t;i++ {
    fmt.Scan(&a,&b)
    if a==b {
      fmt.Println(a)
    } else if a>b {
      fmt.Println(a)
    } else {
      fmt.Println(b)
    }
  }
  fmt.Print("")
}
