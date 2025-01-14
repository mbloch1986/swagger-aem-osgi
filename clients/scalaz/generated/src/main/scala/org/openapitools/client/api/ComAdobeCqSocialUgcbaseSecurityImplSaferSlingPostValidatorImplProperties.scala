package org.openapitools.client.api

import argonaut._
import argonaut.EncodeJson._
import argonaut.DecodeJson._

import org.http4s.{EntityDecoder, EntityEncoder}
import org.http4s.argonaut._
import org.joda.time.DateTime
import ComAdobeCqSocialUgcbaseSecurityImplSaferSlingPostValidatorImplProperties._

case class ComAdobeCqSocialUgcbaseSecurityImplSaferSlingPostValidatorImplProperties (
  parameterWhitelist: Option[ConfigNodePropertyArray],
parameterWhitelistPrefixes: Option[ConfigNodePropertyArray],
binaryParameterWhitelist: Option[ConfigNodePropertyArray],
modifierWhitelist: Option[ConfigNodePropertyArray],
operationWhitelist: Option[ConfigNodePropertyArray],
operationWhitelistPrefixes: Option[ConfigNodePropertyArray],
typehintWhitelist: Option[ConfigNodePropertyArray],
resourcetypeWhitelist: Option[ConfigNodePropertyArray])

object ComAdobeCqSocialUgcbaseSecurityImplSaferSlingPostValidatorImplProperties {
  import DateTimeCodecs._

  implicit val ComAdobeCqSocialUgcbaseSecurityImplSaferSlingPostValidatorImplPropertiesCodecJson: CodecJson[ComAdobeCqSocialUgcbaseSecurityImplSaferSlingPostValidatorImplProperties] = CodecJson.derive[ComAdobeCqSocialUgcbaseSecurityImplSaferSlingPostValidatorImplProperties]
  implicit val ComAdobeCqSocialUgcbaseSecurityImplSaferSlingPostValidatorImplPropertiesDecoder: EntityDecoder[ComAdobeCqSocialUgcbaseSecurityImplSaferSlingPostValidatorImplProperties] = jsonOf[ComAdobeCqSocialUgcbaseSecurityImplSaferSlingPostValidatorImplProperties]
  implicit val ComAdobeCqSocialUgcbaseSecurityImplSaferSlingPostValidatorImplPropertiesEncoder: EntityEncoder[ComAdobeCqSocialUgcbaseSecurityImplSaferSlingPostValidatorImplProperties] = jsonEncoderOf[ComAdobeCqSocialUgcbaseSecurityImplSaferSlingPostValidatorImplProperties]
}
