/**
 * @return {Generator<number>}
 */
var fibGenerator = function*() {
    xnone = 0;
    xntwo = 0;
    yield 0;
    xnone++;
    yield xnone;
    while(true){
        yield xnone+xntwo;
        temp = xnone+xntwo;
        xntwo = xnone;
        xnone = temp;
    }
};

/**
 * const gen = fibGenerator();
 * gen.next().value; // 0
 * gen.next().value; // 1
 */