package main
import "fmt"

func main(){
  var t,x,y,score int
  fmt.Scanln(&t)
  for i:=0;i<t;i++ {
    fmt.Scan(&x,&y)
    score = (x/10)*y
    fmt.Println(score)
  }
}
