
#include <pthread.h>
# define NUM_THREADS	7
# define MAX_LIFE		10
# define EAT_T			10	
# define REST_T			12
# define THINK_T		4
# define TIMEOUT		2000
# define RESTING		0
# define THINKING		1
# define EATING			2
# define DEAD			3
# define FULL			1
# define EMPTY			0

typedef struct		s_philo
{
	int				status;
	int				num;
	int				life;
	int				left_hand;
	int				right_hand;
	struct s_philo	*left_ph;
	struct s_philo	*right_ph;
}					t_philo;

pthread_mutex_t wisemen[NUM_THREADS];

void		*philo(void *data);
t_philo		**init_ph(void);
