/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   bruteforce.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: csauron <csauron@students.42.fr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/17 07:25:33 by csauron           #+#    #+#             */
/*   Updated: 2024/10/17 07:44:54 by csauron          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>
#include <stdlib.h>

#define MAX_PASSWORD_LENGTH 4
#define CHARSET "abcdefghijklmnopqrstuvwxyz"

int try_password(const char *attempt, const char *target_password) {
    return strcmp(attempt, target_password) == 0;
}

void brute_force(char *attempt, int position, int length, const char *target_password) {
    if (position == length) {
        if (try_password(attempt, target_password)) {
            printf("Mot de passe trouvé: %s\n", attempt);
            exit(0);
        }
        return;
    }

    // Utilisation de size_t pour éviter l'avertissement lié à la comparaison entre types signés et non signés
    for (size_t i = 0; i < strlen(CHARSET); i++) {
        attempt[position] = CHARSET[i];
        brute_force(attempt, position + 1, length, target_password);
    }
}

int main() {
    char target_password[MAX_PASSWORD_LENGTH + 1]; 
    printf("Entrer le mot de passe cible: ");
    scanf("%s", target_password);

    char attempt[MAX_PASSWORD_LENGTH + 1];
    memset(attempt, 0, sizeof(attempt));

    for (int length = 1; length <= MAX_PASSWORD_LENGTH; length++) {
        brute_force(attempt, 0, length, target_password);
    }

    printf("Mot de passe non trouvé\n");
    return 0;
}
