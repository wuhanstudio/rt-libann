
const int samples = 150;

const double class[][3] = {
    {1.000000, 0.000000, 0.000000},
    {1.000000, 0.000000, 0.000000},
    {1.000000, 0.000000, 0.000000},
    {1.000000, 0.000000, 0.000000},
    {1.000000, 0.000000, 0.000000},
    {1.000000, 0.000000, 0.000000},
    {1.000000, 0.000000, 0.000000},
    {1.000000, 0.000000, 0.000000},
    {1.000000, 0.000000, 0.000000},
    {1.000000, 0.000000, 0.000000},
    {1.000000, 0.000000, 0.000000},
    {1.000000, 0.000000, 0.000000},
    {1.000000, 0.000000, 0.000000},
    {1.000000, 0.000000, 0.000000},
    {1.000000, 0.000000, 0.000000},
    {1.000000, 0.000000, 0.000000},
    {1.000000, 0.000000, 0.000000},
    {1.000000, 0.000000, 0.000000},
    {1.000000, 0.000000, 0.000000},
    {1.000000, 0.000000, 0.000000},
    {1.000000, 0.000000, 0.000000},
    {1.000000, 0.000000, 0.000000},
    {1.000000, 0.000000, 0.000000},
    {1.000000, 0.000000, 0.000000},
    {1.000000, 0.000000, 0.000000},
    {1.000000, 0.000000, 0.000000},
    {1.000000, 0.000000, 0.000000},
    {1.000000, 0.000000, 0.000000},
    {1.000000, 0.000000, 0.000000},
    {1.000000, 0.000000, 0.000000},
    {1.000000, 0.000000, 0.000000},
    {1.000000, 0.000000, 0.000000},
    {1.000000, 0.000000, 0.000000},
    {1.000000, 0.000000, 0.000000},
    {1.000000, 0.000000, 0.000000},
    {1.000000, 0.000000, 0.000000},
    {1.000000, 0.000000, 0.000000},
    {1.000000, 0.000000, 0.000000},
    {1.000000, 0.000000, 0.000000},
    {1.000000, 0.000000, 0.000000},
    {1.000000, 0.000000, 0.000000},
    {1.000000, 0.000000, 0.000000},
    {1.000000, 0.000000, 0.000000},
    {1.000000, 0.000000, 0.000000},
    {1.000000, 0.000000, 0.000000},
    {1.000000, 0.000000, 0.000000},
    {1.000000, 0.000000, 0.000000},
    {1.000000, 0.000000, 0.000000},
    {1.000000, 0.000000, 0.000000},
    {1.000000, 0.000000, 0.000000},
    {0.000000, 1.000000, 0.000000},
    {0.000000, 1.000000, 0.000000},
    {0.000000, 1.000000, 0.000000},
    {0.000000, 1.000000, 0.000000},
    {0.000000, 1.000000, 0.000000},
    {0.000000, 1.000000, 0.000000},
    {0.000000, 1.000000, 0.000000},
    {0.000000, 1.000000, 0.000000},
    {0.000000, 1.000000, 0.000000},
    {0.000000, 1.000000, 0.000000},
    {0.000000, 1.000000, 0.000000},
    {0.000000, 1.000000, 0.000000},
    {0.000000, 1.000000, 0.000000},
    {0.000000, 1.000000, 0.000000},
    {0.000000, 1.000000, 0.000000},
    {0.000000, 1.000000, 0.000000},
    {0.000000, 1.000000, 0.000000},
    {0.000000, 1.000000, 0.000000},
    {0.000000, 1.000000, 0.000000},
    {0.000000, 1.000000, 0.000000},
    {0.000000, 1.000000, 0.000000},
    {0.000000, 1.000000, 0.000000},
    {0.000000, 1.000000, 0.000000},
    {0.000000, 1.000000, 0.000000},
    {0.000000, 1.000000, 0.000000},
    {0.000000, 1.000000, 0.000000},
    {0.000000, 1.000000, 0.000000},
    {0.000000, 1.000000, 0.000000},
    {0.000000, 1.000000, 0.000000},
    {0.000000, 1.000000, 0.000000},
    {0.000000, 1.000000, 0.000000},
    {0.000000, 1.000000, 0.000000},
    {0.000000, 1.000000, 0.000000},
    {0.000000, 1.000000, 0.000000},
    {0.000000, 1.000000, 0.000000},
    {0.000000, 1.000000, 0.000000},
    {0.000000, 1.000000, 0.000000},
    {0.000000, 1.000000, 0.000000},
    {0.000000, 1.000000, 0.000000},
    {0.000000, 1.000000, 0.000000},
    {0.000000, 1.000000, 0.000000},
    {0.000000, 1.000000, 0.000000},
    {0.000000, 1.000000, 0.000000},
    {0.000000, 1.000000, 0.000000},
    {0.000000, 1.000000, 0.000000},
    {0.000000, 1.000000, 0.000000},
    {0.000000, 1.000000, 0.000000},
    {0.000000, 1.000000, 0.000000},
    {0.000000, 1.000000, 0.000000},
    {0.000000, 1.000000, 0.000000},
    {0.000000, 0.000000, 1.000000},
    {0.000000, 0.000000, 1.000000},
    {0.000000, 0.000000, 1.000000},
    {0.000000, 0.000000, 1.000000},
    {0.000000, 0.000000, 1.000000},
    {0.000000, 0.000000, 1.000000},
    {0.000000, 0.000000, 1.000000},
    {0.000000, 0.000000, 1.000000},
    {0.000000, 0.000000, 1.000000},
    {0.000000, 0.000000, 1.000000},
    {0.000000, 0.000000, 1.000000},
    {0.000000, 0.000000, 1.000000},
    {0.000000, 0.000000, 1.000000},
    {0.000000, 0.000000, 1.000000},
    {0.000000, 0.000000, 1.000000},
    {0.000000, 0.000000, 1.000000},
    {0.000000, 0.000000, 1.000000},
    {0.000000, 0.000000, 1.000000},
    {0.000000, 0.000000, 1.000000},
    {0.000000, 0.000000, 1.000000},
    {0.000000, 0.000000, 1.000000},
    {0.000000, 0.000000, 1.000000},
    {0.000000, 0.000000, 1.000000},
    {0.000000, 0.000000, 1.000000},
    {0.000000, 0.000000, 1.000000},
    {0.000000, 0.000000, 1.000000},
    {0.000000, 0.000000, 1.000000},
    {0.000000, 0.000000, 1.000000},
    {0.000000, 0.000000, 1.000000},
    {0.000000, 0.000000, 1.000000},
    {0.000000, 0.000000, 1.000000},
    {0.000000, 0.000000, 1.000000},
    {0.000000, 0.000000, 1.000000},
    {0.000000, 0.000000, 1.000000},
    {0.000000, 0.000000, 1.000000},
    {0.000000, 0.000000, 1.000000},
    {0.000000, 0.000000, 1.000000},
    {0.000000, 0.000000, 1.000000},
    {0.000000, 0.000000, 1.000000},
    {0.000000, 0.000000, 1.000000},
    {0.000000, 0.000000, 1.000000},
    {0.000000, 0.000000, 1.000000},
    {0.000000, 0.000000, 1.000000},
    {0.000000, 0.000000, 1.000000},
    {0.000000, 0.000000, 1.000000},
    {0.000000, 0.000000, 1.000000},
    {0.000000, 0.000000, 1.000000},
    {0.000000, 0.000000, 1.000000},
    {0.000000, 0.000000, 1.000000},
    {0.000000, 0.000000, 1.000000},
};

const double input[][4] = {
    {5.100000, 3.500000, 1.400000, 0.200000}, 
    {4.900000, 3.000000, 1.400000, 0.200000}, 
    {4.700000, 3.200000, 1.300000, 0.200000}, 
    {4.600000, 3.100000, 1.500000, 0.200000}, 
    {5.000000, 3.600000, 1.400000, 0.200000}, 
    {5.400000, 3.900000, 1.700000, 0.400000}, 
    {4.600000, 3.400000, 1.400000, 0.300000}, 
    {5.000000, 3.400000, 1.500000, 0.200000}, 
    {4.400000, 2.900000, 1.400000, 0.200000}, 
    {4.900000, 3.100000, 1.500000, 0.100000}, 
    {5.400000, 3.700000, 1.500000, 0.200000}, 
    {4.800000, 3.400000, 1.600000, 0.200000}, 
    {4.800000, 3.000000, 1.400000, 0.100000}, 
    {4.300000, 3.000000, 1.100000, 0.100000}, 
    {5.800000, 4.000000, 1.200000, 0.200000}, 
    {5.700000, 4.400000, 1.500000, 0.400000}, 
    {5.400000, 3.900000, 1.300000, 0.400000}, 
    {5.100000, 3.500000, 1.400000, 0.300000}, 
    {5.700000, 3.800000, 1.700000, 0.300000}, 
    {5.100000, 3.800000, 1.500000, 0.300000}, 
    {5.400000, 3.400000, 1.700000, 0.200000}, 
    {5.100000, 3.700000, 1.500000, 0.400000}, 
    {4.600000, 3.600000, 1.000000, 0.200000}, 
    {5.100000, 3.300000, 1.700000, 0.500000}, 
    {4.800000, 3.400000, 1.900000, 0.200000}, 
    {5.000000, 3.000000, 1.600000, 0.200000}, 
    {5.000000, 3.400000, 1.600000, 0.400000}, 
    {5.200000, 3.500000, 1.500000, 0.200000}, 
    {5.200000, 3.400000, 1.400000, 0.200000}, 
    {4.700000, 3.200000, 1.600000, 0.200000}, 
    {4.800000, 3.100000, 1.600000, 0.200000}, 
    {5.400000, 3.400000, 1.500000, 0.400000}, 
    {5.200000, 4.100000, 1.500000, 0.100000}, 
    {5.500000, 4.200000, 1.400000, 0.200000}, 
    {4.900000, 3.100000, 1.500000, 0.100000}, 
    {5.000000, 3.200000, 1.200000, 0.200000}, 
    {5.500000, 3.500000, 1.300000, 0.200000}, 
    {4.900000, 3.100000, 1.500000, 0.100000}, 
    {4.400000, 3.000000, 1.300000, 0.200000}, 
    {5.100000, 3.400000, 1.500000, 0.200000}, 
    {5.000000, 3.500000, 1.300000, 0.300000}, 
    {4.500000, 2.300000, 1.300000, 0.300000}, 
    {4.400000, 3.200000, 1.300000, 0.200000}, 
    {5.000000, 3.500000, 1.600000, 0.600000}, 
    {5.100000, 3.800000, 1.900000, 0.400000}, 
    {4.800000, 3.000000, 1.400000, 0.300000}, 
    {5.100000, 3.800000, 1.600000, 0.200000}, 
    {4.600000, 3.200000, 1.400000, 0.200000}, 
    {5.300000, 3.700000, 1.500000, 0.200000}, 
    {5.000000, 3.300000, 1.400000, 0.200000}, 
    {7.000000, 3.200000, 4.700000, 1.400000}, 
    {6.400000, 3.200000, 4.500000, 1.500000}, 
    {6.900000, 3.100000, 4.900000, 1.500000}, 
    {5.500000, 2.300000, 4.000000, 1.300000}, 
    {6.500000, 2.800000, 4.600000, 1.500000}, 
    {5.700000, 2.800000, 4.500000, 1.300000}, 
    {6.300000, 3.300000, 4.700000, 1.600000}, 
    {4.900000, 2.400000, 3.300000, 1.000000}, 
    {6.600000, 2.900000, 4.600000, 1.300000}, 
    {5.200000, 2.700000, 3.900000, 1.400000}, 
    {5.000000, 2.000000, 3.500000, 1.000000}, 
    {5.900000, 3.000000, 4.200000, 1.500000}, 
    {6.000000, 2.200000, 4.000000, 1.000000}, 
    {6.100000, 2.900000, 4.700000, 1.400000}, 
    {5.600000, 2.900000, 3.600000, 1.300000}, 
    {6.700000, 3.100000, 4.400000, 1.400000}, 
    {5.600000, 3.000000, 4.500000, 1.500000}, 
    {5.800000, 2.700000, 4.100000, 1.000000}, 
    {6.200000, 2.200000, 4.500000, 1.500000}, 
    {5.600000, 2.500000, 3.900000, 1.100000}, 
    {5.900000, 3.200000, 4.800000, 1.800000}, 
    {6.100000, 2.800000, 4.000000, 1.300000}, 
    {6.300000, 2.500000, 4.900000, 1.500000}, 
    {6.100000, 2.800000, 4.700000, 1.200000}, 
    {6.400000, 2.900000, 4.300000, 1.300000}, 
    {6.600000, 3.000000, 4.400000, 1.400000}, 
    {6.800000, 2.800000, 4.800000, 1.400000}, 
    {6.700000, 3.000000, 5.000000, 1.700000}, 
    {6.000000, 2.900000, 4.500000, 1.500000}, 
    {5.700000, 2.600000, 3.500000, 1.000000}, 
    {5.500000, 2.400000, 3.800000, 1.100000}, 
    {5.500000, 2.400000, 3.700000, 1.000000}, 
    {5.800000, 2.700000, 3.900000, 1.200000}, 
    {6.000000, 2.700000, 5.100000, 1.600000}, 
    {5.400000, 3.000000, 4.500000, 1.500000}, 
    {6.000000, 3.400000, 4.500000, 1.600000}, 
    {6.700000, 3.100000, 4.700000, 1.500000}, 
    {6.300000, 2.300000, 4.400000, 1.300000}, 
    {5.600000, 3.000000, 4.100000, 1.300000}, 
    {5.500000, 2.500000, 4.000000, 1.300000}, 
    {5.500000, 2.600000, 4.400000, 1.200000}, 
    {6.100000, 3.000000, 4.600000, 1.400000}, 
    {5.800000, 2.600000, 4.000000, 1.200000}, 
    {5.000000, 2.300000, 3.300000, 1.000000}, 
    {5.600000, 2.700000, 4.200000, 1.300000}, 
    {5.700000, 3.000000, 4.200000, 1.200000}, 
    {5.700000, 2.900000, 4.200000, 1.300000}, 
    {6.200000, 2.900000, 4.300000, 1.300000}, 
    {5.100000, 2.500000, 3.000000, 1.100000}, 
    {5.700000, 2.800000, 4.100000, 1.300000}, 
    {6.300000, 3.300000, 6.000000, 2.500000}, 
    {5.800000, 2.700000, 5.100000, 1.900000}, 
    {7.100000, 3.000000, 5.900000, 2.100000}, 
    {6.300000, 2.900000, 5.600000, 1.800000}, 
    {6.500000, 3.000000, 5.800000, 2.200000}, 
    {7.600000, 3.000000, 6.600000, 2.100000}, 
    {4.900000, 2.500000, 4.500000, 1.700000}, 
    {7.300000, 2.900000, 6.300000, 1.800000}, 
    {6.700000, 2.500000, 5.800000, 1.800000}, 
    {7.200000, 3.600000, 6.100000, 2.500000}, 
    {6.500000, 3.200000, 5.100000, 2.000000}, 
    {6.400000, 2.700000, 5.300000, 1.900000}, 
    {6.800000, 3.000000, 5.500000, 2.100000}, 
    {5.700000, 2.500000, 5.000000, 2.000000}, 
    {5.800000, 2.800000, 5.100000, 2.400000}, 
    {6.400000, 3.200000, 5.300000, 2.300000}, 
    {6.500000, 3.000000, 5.500000, 1.800000}, 
    {7.700000, 3.800000, 6.700000, 2.200000}, 
    {7.700000, 2.600000, 6.900000, 2.300000}, 
    {6.000000, 2.200000, 5.000000, 1.500000}, 
    {6.900000, 3.200000, 5.700000, 2.300000}, 
    {5.600000, 2.800000, 4.900000, 2.000000}, 
    {7.700000, 2.800000, 6.700000, 2.000000}, 
    {6.300000, 2.700000, 4.900000, 1.800000}, 
    {6.700000, 3.300000, 5.700000, 2.100000}, 
    {7.200000, 3.200000, 6.000000, 1.800000}, 
    {6.200000, 2.800000, 4.800000, 1.800000}, 
    {6.100000, 3.000000, 4.900000, 1.800000}, 
    {6.400000, 2.800000, 5.600000, 2.100000}, 
    {7.200000, 3.000000, 5.800000, 1.600000}, 
    {7.400000, 2.800000, 6.100000, 1.900000}, 
    {7.900000, 3.800000, 6.400000, 2.000000}, 
    {6.400000, 2.800000, 5.600000, 2.200000}, 
    {6.300000, 2.800000, 5.100000, 1.500000}, 
    {6.100000, 2.600000, 5.600000, 1.400000}, 
    {7.700000, 3.000000, 6.100000, 2.300000}, 
    {6.300000, 3.400000, 5.600000, 2.400000}, 
    {6.400000, 3.100000, 5.500000, 1.800000}, 
    {6.000000, 3.000000, 4.800000, 1.800000}, 
    {6.900000, 3.100000, 5.400000, 2.100000}, 
    {6.700000, 3.100000, 5.600000, 2.400000}, 
    {6.900000, 3.100000, 5.100000, 2.300000}, 
    {5.800000, 2.700000, 5.100000, 1.900000}, 
    {6.800000, 3.200000, 5.900000, 2.300000}, 
    {6.700000, 3.300000, 5.700000, 2.500000}, 
    {6.700000, 3.000000, 5.200000, 2.300000}, 
    {6.300000, 2.500000, 5.000000, 1.900000}, 
    {6.500000, 3.000000, 5.200000, 2.000000}, 
    {6.200000, 3.400000, 5.400000, 2.300000}, 
    {5.900000, 3.000000, 5.100000, 1.800000},
};
