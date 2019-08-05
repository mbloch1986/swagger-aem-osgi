package org.openapitools.client.api

import argonaut._
import argonaut.EncodeJson._
import argonaut.DecodeJson._

import org.http4s.{EntityDecoder, EntityEncoder}
import org.http4s.argonaut._
import org.joda.time.DateTime
import ComDayCqDamCoreImplServletBatchMetadataServletProperties._

case class ComDayCqDamCoreImplServletBatchMetadataServletProperties (
  cqDamBatchMetadataAssetDefault: Option[ConfigNodePropertyArray],
cqDamBatchMetadataCollectionDefault: Option[ConfigNodePropertyArray],
cqDamBatchMetadataMaxresources: Option[ConfigNodePropertyInteger])

object ComDayCqDamCoreImplServletBatchMetadataServletProperties {
  import DateTimeCodecs._

  implicit val ComDayCqDamCoreImplServletBatchMetadataServletPropertiesCodecJson: CodecJson[ComDayCqDamCoreImplServletBatchMetadataServletProperties] = CodecJson.derive[ComDayCqDamCoreImplServletBatchMetadataServletProperties]
  implicit val ComDayCqDamCoreImplServletBatchMetadataServletPropertiesDecoder: EntityDecoder[ComDayCqDamCoreImplServletBatchMetadataServletProperties] = jsonOf[ComDayCqDamCoreImplServletBatchMetadataServletProperties]
  implicit val ComDayCqDamCoreImplServletBatchMetadataServletPropertiesEncoder: EntityEncoder[ComDayCqDamCoreImplServletBatchMetadataServletProperties] = jsonEncoderOf[ComDayCqDamCoreImplServletBatchMetadataServletProperties]
}