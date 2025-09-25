#include "mailinformation.h"

mailInformation::mailInformation() {
}
QString mailInformation::getSenderMail(){
    return senderMail;
}
QString mailInformation::getSenderMailPassword(){
    return senderMailPassword;
}
QString mailInformation::getRecieverMail(){
    return recieverMail;
}
QString mailInformation::getBody(){
    return body;
}
bool mailInformation::getSavedSitutation(){
    return isSaved;
}
void mailInformation::setSenderMail(QString senderMail){
    this->senderMail = senderMail;
}
void mailInformation::setSenderMailPassword(QString senderMailPassword){
    this->senderMailPassword = senderMailPassword;
}
void mailInformation::setRecieverMail(QString recieverMail){
    this->recieverMail = recieverMail;
}
void mailInformation::setSavedSitutation(bool isSaved){
    this->isSaved = isSaved;
}
void mailInformation::setBody(QString body){
    this->body = body;
}
