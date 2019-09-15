#include <bits/stdc++.h>
// #include <queue>



int main() {
    std::priority_queue<int> pq_ganjil, pq_genap;
    int N, x;

    scanf("%d", &N);

    for (int i = 0; i < N; i++) {
        scanf("%d", &x);
        if (x % 2) {
            pq_ganjil.push(x);
        } else {
            pq_genap.push(x);
        }
    }

    int max1, max2, sisa;
    //buat ganjil
    while(!pq_ganjil.empty() && pq_ganjil.size() != 1) {
        max1 = pq_ganjil.top();
        pq_ganjil.pop();
        max2 = pq_ganjil.top();
        pq_ganjil.pop();
        sisa = abs(max1 - max2);
        if (sisa) {
            if (sisa % 2) {
                pq_ganjil.push(sisa);
            } else {
                pq_genap.push(sisa);
            }
        }
    }

    if (!pq_ganjil.empty() && pq_ganjil.size() == 1) {
        pq_genap.push(pq_ganjil.top());
    }

    //buat genap
    while(!pq_genap.empty() && pq_genap.size() != 1) {
        max1 = pq_genap.top();
        pq_genap.pop();
        max2 = pq_genap.top();
        pq_genap.pop();
        sisa = abs(max1 - max2);
        if (sisa) {
            pq_genap.push(sisa);
        }
    }

    

    if (pq_genap.empty()) {
        printf("YES\n");
    } else {
        printf("NO\n"); 
    }

    return 0;

    // while(!pq.empty() && pq.size() != 1) {
    //     max1 = pq.top();
    //     pq.pop();
    //     max2 = pq.top();
    //     pq.pop();
    //     max1--;
    //     max2--;
    //     if (max1) {
    //         pq.push(max1);
    //     }
    //     if (max2) {
    //         pq.push(max2);
    //     }
    // }

    // int max1, max2, sisa;
    // while(!pq.empty() && pq.size() != 1) {
    //     max1 = pq.top();
    //     pq.pop();
    //     max2 = pq.top();
    //     pq.pop();
    //     sisa = abs(max1 - max2);
    //     if (sisa) {
    //         pq.push(sisa);
    //     }
    // }
}
