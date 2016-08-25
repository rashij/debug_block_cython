#include "TopPair.h"

TopPair::TopPair() { }

TopPair::TopPair(double similarity, unsigned int l_rec_idx, unsigned int r_rec_idx) {
    sim = similarity;
    l_rec = l_rec_idx;
    r_rec = r_rec_idx;
}

TopPair::~TopPair() { }

 bool TopPair::operator<(const TopPair &other) const
 {
     return sim > other.sim;
 }

 bool TopPair::operator>(const TopPair &other) const
 {
     return sim < other.sim;
 }
