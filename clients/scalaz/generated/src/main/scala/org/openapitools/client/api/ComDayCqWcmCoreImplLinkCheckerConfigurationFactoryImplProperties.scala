package org.openapitools.client.api

import argonaut._
import argonaut.EncodeJson._
import argonaut.DecodeJson._

import org.http4s.{EntityDecoder, EntityEncoder}
import org.http4s.argonaut._
import org.joda.time.DateTime
import ComDayCqWcmCoreImplLinkCheckerConfigurationFactoryImplProperties._

case class ComDayCqWcmCoreImplLinkCheckerConfigurationFactoryImplProperties (
  linkExpiredPrefix: Option[ConfigNodePropertyString],
linkExpiredRemove: Option[ConfigNodePropertyBoolean],
linkExpiredSuffix: Option[ConfigNodePropertyString],
linkInvalidPrefix: Option[ConfigNodePropertyString],
linkInvalidRemove: Option[ConfigNodePropertyBoolean],
linkInvalidSuffix: Option[ConfigNodePropertyString],
linkPredatedPrefix: Option[ConfigNodePropertyString],
linkPredatedRemove: Option[ConfigNodePropertyBoolean],
linkPredatedSuffix: Option[ConfigNodePropertyString],
linkWcmmodes: Option[ConfigNodePropertyArray])

object ComDayCqWcmCoreImplLinkCheckerConfigurationFactoryImplProperties {
  import DateTimeCodecs._

  implicit val ComDayCqWcmCoreImplLinkCheckerConfigurationFactoryImplPropertiesCodecJson: CodecJson[ComDayCqWcmCoreImplLinkCheckerConfigurationFactoryImplProperties] = CodecJson.derive[ComDayCqWcmCoreImplLinkCheckerConfigurationFactoryImplProperties]
  implicit val ComDayCqWcmCoreImplLinkCheckerConfigurationFactoryImplPropertiesDecoder: EntityDecoder[ComDayCqWcmCoreImplLinkCheckerConfigurationFactoryImplProperties] = jsonOf[ComDayCqWcmCoreImplLinkCheckerConfigurationFactoryImplProperties]
  implicit val ComDayCqWcmCoreImplLinkCheckerConfigurationFactoryImplPropertiesEncoder: EntityEncoder[ComDayCqWcmCoreImplLinkCheckerConfigurationFactoryImplProperties] = jsonEncoderOf[ComDayCqWcmCoreImplLinkCheckerConfigurationFactoryImplProperties]
}
