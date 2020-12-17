package com.spostgres.Spring.Postgres.services;
import com.spostgres.Spring.Postgres.User.User;
import exceptions.EtAuthException;


public interface UserService {

    User validateUser(String email, String password) throws EtAuthException;

    User registerUser(String firstName, String lastName, String email, String password) throws EtAuthException;


}
