package main

import "fmt"

func main() {
	for i := 0; i < 1000; i++ {
		fmt.Println("Test Num: ", i+1, " ------")
		fmt.Println(21348 + 1831254)
		fmt.Println(51312 - 2156)
		fmt.Println(2556 * 25613)
		fmt.Println(102114 / 2564)
		fmt.Println(125 * 256 * (512 + 1024))
		fmt.Println(125 * 256 * (6457 + 1024))
	}
}
