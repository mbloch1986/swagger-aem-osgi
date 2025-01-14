package org.openapitools.client.api

import argonaut._
import argonaut.EncodeJson._
import argonaut.DecodeJson._

import org.http4s.{EntityDecoder, EntityEncoder}
import org.http4s.argonaut._
import org.joda.time.DateTime
import ComDayCqWcmFoundationSecurityImplSaferSlingPostValidatorImplProperties._

case class ComDayCqWcmFoundationSecurityImplSaferSlingPostValidatorImplProperties (
  parameterWhitelist: Option[ConfigNodePropertyArray],
parameterWhitelistPrefixes: Option[ConfigNodePropertyArray],
binaryParameterWhitelist: Option[ConfigNodePropertyArray],
modifierWhitelist: Option[ConfigNodePropertyArray],
operationWhitelist: Option[ConfigNodePropertyArray],
operationWhitelistPrefixes: Option[ConfigNodePropertyArray],
typehintWhitelist: Option[ConfigNodePropertyArray],
resourcetypeWhitelist: Option[ConfigNodePropertyArray])

object ComDayCqWcmFoundationSecurityImplSaferSlingPostValidatorImplProperties {
  import DateTimeCodecs._

  implicit val ComDayCqWcmFoundationSecurityImplSaferSlingPostValidatorImplPropertiesCodecJson: CodecJson[ComDayCqWcmFoundationSecurityImplSaferSlingPostValidatorImplProperties] = CodecJson.derive[ComDayCqWcmFoundationSecurityImplSaferSlingPostValidatorImplProperties]
  implicit val ComDayCqWcmFoundationSecurityImplSaferSlingPostValidatorImplPropertiesDecoder: EntityDecoder[ComDayCqWcmFoundationSecurityImplSaferSlingPostValidatorImplProperties] = jsonOf[ComDayCqWcmFoundationSecurityImplSaferSlingPostValidatorImplProperties]
  implicit val ComDayCqWcmFoundationSecurityImplSaferSlingPostValidatorImplPropertiesEncoder: EntityEncoder[ComDayCqWcmFoundationSecurityImplSaferSlingPostValidatorImplProperties] = jsonEncoderOf[ComDayCqWcmFoundationSecurityImplSaferSlingPostValidatorImplProperties]
}
