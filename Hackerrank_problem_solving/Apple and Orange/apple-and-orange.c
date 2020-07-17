#include<stdio.h>

int main() {
    int s, t, a, b, m, n;
    int m_dist[100000], n_dist[100000];
    int m_count=0, n_count=0;
    scanf("%d%d%d%d%d%d", &s, &t, &a, &b, &m, &n);

    for(int i=0; i<m; i++) {
        scanf("%d", &m_dist[i]);
        if(s <= a+m_dist[i] && t >= a+m_dist[i])
            m_count++;
    }
    for(int i=0; i<n; i++) {
        scanf("%d", &n_dist[i]);
        if(s <= b+n_dist[i] && t >= b+n_dist[i])
            n_count++;
    }

    printf("%d\n%d\n", m_count, n_count);
    return 0;
}