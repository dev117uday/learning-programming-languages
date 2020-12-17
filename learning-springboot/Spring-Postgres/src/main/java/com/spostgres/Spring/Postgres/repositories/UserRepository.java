package com.spostgres.Spring.Postgres.repositories;

import com.spostgres.Spring.Postgres.User.User;
import exceptions.EtAuthException;

public interface UserRepository {

    Integer create(String firstName, String lastName,String password, String email) throws EtAuthException;
    User findByEmailAndPassword(String email, String password) throws EtAuthException;
    Integer getCountByEmail(String email);
    User findById(Integer userId);

}
