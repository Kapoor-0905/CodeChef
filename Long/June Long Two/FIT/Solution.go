package main
import "fmt"

func main(){
	var x,t int 
	fmt.Scanln(&t)
	for i:=0 ; i<t ; i++ {
	    fmt.Scanln(&x)
	    fmt.Println(x*5*2)
	}
	fmt.Println("")
}
