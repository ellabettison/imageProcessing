short prewittMask[8][3][3] = {{
                                       { 1, 1, 1},
                                       { 1, -2, 1},
                                       {-1, -1, -1} },
                               {
                                       { 1, 1, 1},
                                       { 1, -2, -1},
                                       { 1, -1, -1} },
                               {
                                       { 1, 1, -1},
                                       { 1, -2, -1},
                                       { 1, 1, -1} },
                               {
                                       { 1, -1, -1},
                                       { 1, -2, -1},
                                       { 1, 1, 1} },
                               {
                                       {-1, -1, -1},
                                       { 1, -2, 1},
                                       { 1, 1, 1} },
                               {
                                       {-1, -1, 1},
                                       {-1, -2, 1},
                                       { 1, 1, 1} },
                               {
                                       {-1, 1, 1},
                                       {-1, -2, 1},
                                       {-1, 1, 1} },
                               {
                                       { 1, 1, 1},
                                       {-1, -2, 1},
                                       {-1, -1, 1} }};