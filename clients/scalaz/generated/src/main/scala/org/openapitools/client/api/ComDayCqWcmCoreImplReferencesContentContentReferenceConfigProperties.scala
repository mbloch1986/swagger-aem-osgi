package org.openapitools.client.api

import argonaut._
import argonaut.EncodeJson._
import argonaut.DecodeJson._

import org.http4s.{EntityDecoder, EntityEncoder}
import org.http4s.argonaut._
import org.joda.time.DateTime
import ComDayCqWcmCoreImplReferencesContentContentReferenceConfigProperties._

case class ComDayCqWcmCoreImplReferencesContentContentReferenceConfigProperties (
  contentReferenceConfigResourceTypes: Option[ConfigNodePropertyArray])

object ComDayCqWcmCoreImplReferencesContentContentReferenceConfigProperties {
  import DateTimeCodecs._

  implicit val ComDayCqWcmCoreImplReferencesContentContentReferenceConfigPropertiesCodecJson: CodecJson[ComDayCqWcmCoreImplReferencesContentContentReferenceConfigProperties] = CodecJson.derive[ComDayCqWcmCoreImplReferencesContentContentReferenceConfigProperties]
  implicit val ComDayCqWcmCoreImplReferencesContentContentReferenceConfigPropertiesDecoder: EntityDecoder[ComDayCqWcmCoreImplReferencesContentContentReferenceConfigProperties] = jsonOf[ComDayCqWcmCoreImplReferencesContentContentReferenceConfigProperties]
  implicit val ComDayCqWcmCoreImplReferencesContentContentReferenceConfigPropertiesEncoder: EntityEncoder[ComDayCqWcmCoreImplReferencesContentContentReferenceConfigProperties] = jsonEncoderOf[ComDayCqWcmCoreImplReferencesContentContentReferenceConfigProperties]
}
