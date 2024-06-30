int somaArray(int arr[], int n) {
    //  se o tamanho do array é 0, a soma é 0
    if (n == 0) {
        return 0;
    }
    // Soma o último elemento do array com a soma dos elementos restantes
    return arr[n - 1] + somaArray(arr, n - 1);
}
int main() {
    int arr[] = {1, 2, 3, 4, 5}; 
    int n = 5;//  o tamanho do array

    int soma = somaArray(arr, n);
    printf("A soma dos elementos do array e: %d\n", soma);

    return 0;
}