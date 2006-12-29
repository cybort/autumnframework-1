/*
* Copyright 2006 the original author or authors.
* 
* Licensed under the Apache License, Version 2.0 (the "License");
* you may not use this file except in compliance with the License.
* You may obtain a copy of the License at
* 
*      http://www.apache.org/licenses/LICENSE-2.0
* 
* Unless required by applicable law or agreed to in writing, software
* distributed under the License is distributed on an "AS IS" BASIS,
* WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
* See the License for the specific language governing permissions and
* limitations under the License.
*/

#include "AutumnException.h"
#include "LocalLibrary.h"

/**
 * AutumnFramework's local library
 * 
 * @version 0.1.0
 * @since 2006-12-16
 */

LocalLibrary* LocalLibrary::instance = NULL;

LocalLibrary* LocalLibrary::getInstance(){
	if( LocalLibrary::instance == NULL)
		LocalLibrary::instance = new LocalLibrary();
	return LocalLibrary::instance;
}

void* LocalLibrary::getFunction(string name){
	map<string, void*>::iterator it=this->LocalFunctions.find(name);
	if( it != this->LocalFunctions.end() )
		return it->second;
	throw new NotFoundEx("LocalLibrary", "getFunction", 
		"function [" + name + "] not found!");
}
