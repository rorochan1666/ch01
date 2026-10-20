int solution(int X, int Y, int D) {
    int diff = Y - X;
    return (diff + D - 1) / D;
}
