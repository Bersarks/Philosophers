#ifndef PHILOSOPHERS_H
# define PHILOSOPHERS_H
# define MAX_INT 2147483647

# include <sys/time.h>
# include <sys/wait.h>
# include <signal.h>
# include <semaphore.h>
# include <pthread.h>
# include <sys/stat.h>
# include <fcntl.h>
# include <unistd.h>
# include <stdio.h>
# include <stdlib.h>

typedef struct s_philosopher
{
	int				id;
	int				ate_count;
	long long		t_last_meal;
	struct s_rules	*rules;
	pthread_t		died;
	pid_t			pid;
}	t_philosopher;

typedef struct s_rules
{
	int				philo_count;
	int				time_to_die;
	int				time_to_eat;
	int				time_to_sleep;
	int				number_must_eat;
	int				died;
	long long		first_timestamp;
	sem_t			*meal_check;
	sem_t			*forks;
	sem_t			*writing;
	t_philosopher	*philosophers;
}	t_rules;

// ERROR_MANAGER.C
int						write_error(char *str);

// INIT.C
int						init_data(t_rules *rules, char **argv);

// UTILS.C
int						ft_atoi(const char *str);
void					action_print(t_rules *rules, int id, char *string);
long long				timestamp(void);
long long				time_diff(long long past, long long pres);
void					smart_sleep(long long time, t_rules *rules);

// LAUNCHER.C
int						launcher(t_rules *rules);
void					exit_launcher(t_rules *rules);
#endif
