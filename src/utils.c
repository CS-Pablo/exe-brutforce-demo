/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: csauron <csauron@students.42.fr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/17 07:30:39 by csauron           #+#    #+#             */
/*   Updated: 2024/10/17 07:31:38 by csauron          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
#include "include/utils.h"


int try_password(const char *attempt, const char *target_password) {
    return strcmp(attempt, target_password) == 0;
}
