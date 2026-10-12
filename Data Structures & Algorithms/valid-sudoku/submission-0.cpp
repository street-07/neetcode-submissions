
class Solution {
public:

    int check(int n, int m, map<char, int>& mp,
              vector<vector<char>>& board) {

        mp.clear();

        for (int i = n; i < n + 3; i++) {
            for (int j = m; j < m + 3; j++) {

                if (board[i][j] == '.') continue;

                if (mp[board[i][j]] >= 1)
                    return 0;

                mp[board[i][j]]++;
            }
        }

        return 1;
    }

    bool isValidSudoku(vector<vector<char>>& board) {

        map<char, int> mp;

        // Check columns
        for (int j = 0; j < 9; j++) {
            mp.clear();

            for (int i = 0; i < 9; i++) {

                if (board[i][j] == '.') continue;

                if (mp[board[i][j]] >= 1)
                    return false;

                mp[board[i][j]]++;
            }
        }

        // Check rows
        for (int j = 0; j < 9; j++) {
            mp.clear();

            for (int i = 0; i < 9; i++) {

                if (board[j][i] == '.') continue;

                if (mp[board[j][i]] >= 1)
                    return false;

                mp[board[j][i]]++;
            }
        }

        // Check all 3x3 subgrids
        for (int i = 0; i < 9; i += 3) {
            for (int j = 0; j < 9; j += 3) {

                if (check(i, j, mp, board) == 0)
                    return false;
            }
        }

        return true;
    }
};
