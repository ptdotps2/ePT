#include <stddef.h>
#include <openssl/evp.h>

void handleErrors(void) {
  printf("ePT error\n");
  exit(1);
}

void sha256(const void *data, size_t length, char *hash)
{
  EVP_MD_CTX *mdctx;

  if((mdctx = EVP_MD_CTX_new()) == NULL) {
    handleErrors();
  }

  if(1 != EVP_DigestInit_ex(mdctx, EVP_sha256(), NULL)) {
    handleErrors();
  }

  if(1 != EVP_DigestUpdate(mdctx, data, length)) {
    handleErrors();
  }

  /* the digest context ctx is automatically cleaned up. */
  if(1 != EVP_DigestFinal(mdctx, (unsigned char*)hash, NULL)) {
    handleErrors();
  }

  EVP_MD_CTX_free(mdctx);
}

