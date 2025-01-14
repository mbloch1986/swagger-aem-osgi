package org.openapitools.client.api

import argonaut._
import argonaut.EncodeJson._
import argonaut.DecodeJson._

import org.http4s.{EntityDecoder, EntityEncoder}
import org.http4s.argonaut._
import org.joda.time.DateTime
import ComDayCqMailerImplEmailCqRetrieverTemplateFactoryProperties._

case class ComDayCqMailerImplEmailCqRetrieverTemplateFactoryProperties (
  mailerEmailEmbed: Option[ConfigNodePropertyBoolean],
mailerEmailCharset: Option[ConfigNodePropertyString],
mailerEmailRetrieverUserID: Option[ConfigNodePropertyString],
mailerEmailRetrieverUserPWD: Option[ConfigNodePropertyString])

object ComDayCqMailerImplEmailCqRetrieverTemplateFactoryProperties {
  import DateTimeCodecs._

  implicit val ComDayCqMailerImplEmailCqRetrieverTemplateFactoryPropertiesCodecJson: CodecJson[ComDayCqMailerImplEmailCqRetrieverTemplateFactoryProperties] = CodecJson.derive[ComDayCqMailerImplEmailCqRetrieverTemplateFactoryProperties]
  implicit val ComDayCqMailerImplEmailCqRetrieverTemplateFactoryPropertiesDecoder: EntityDecoder[ComDayCqMailerImplEmailCqRetrieverTemplateFactoryProperties] = jsonOf[ComDayCqMailerImplEmailCqRetrieverTemplateFactoryProperties]
  implicit val ComDayCqMailerImplEmailCqRetrieverTemplateFactoryPropertiesEncoder: EntityEncoder[ComDayCqMailerImplEmailCqRetrieverTemplateFactoryProperties] = jsonEncoderOf[ComDayCqMailerImplEmailCqRetrieverTemplateFactoryProperties]
}
